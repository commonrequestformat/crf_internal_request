<?php
/**
 * @file
 * crf_internal_request.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_internal_request_default_rules_configuration() {
  $items = array();
  $items['rules_email_ocha_focal_point_on_internal_report_submission'] = entity_import('rules_config', '{ "rules_email_ocha_focal_point_on_internal_report_submission" : {
      "LABEL" : "Email OCHA focal point on Internal Report submission",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "internal_report" : "internal_report" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_internal_request" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-internal-request" ],
            "field" : "field_int_req_contact"
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-internal-request:field-int-req-contact" ] },
            "ITEM" : { "current_ocha_focal_point" : "Current OCHA focal point" },
            "DO" : [
              { "mail" : {
                  "to" : [ "current-ocha-focal-point:mail" ],
                  "subject" : "Internal Report provided by [node:author:field-first-name] [node:author:field-last-name] in [node:field-internal-request:title] is now finalised",
                  "message" : "Dear [current-ocha-focal-point:field-first-name] [current-ocha-focal-point:field-first-name],\\r\\n\\r\\nKindly note that the Internal Report by [node:author:field-first-name] [node:author:field-last-name] in the Information Request [node:field-internal-request:title] has been finalised.\\r\\n\\r\\n[node:log]\\r\\n\\r\\nThe information can be viewed online: [node:url]\\r\\n\\r\\nNo action is required on your part at this time.\\r\\n\\r\\nKind regards,\\r\\nOCHA\\r\\n",
                  "from" : [ "node:author:mail" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "redirect" : { "url" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  $items['rules_email_ocha_focal_point_on_internal_request_submission'] = entity_import('rules_config', '{ "rules_email_ocha_focal_point_on_internal_request_submission" : {
      "LABEL" : "Email OCHA focal point on Internal Request submission",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "internal_request" : "internal_request" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_int_req_contact" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-int-req-contact" ] },
            "ITEM" : { "current_ocha_focal_point" : "Current OCHA focal point" },
            "DO" : [
              { "mail" : {
                  "to" : [ "current-ocha-focal-point:mail" ],
                  "subject" : "New Internal OCHA Request for [node:field-reporting-type:name]",
                  "message" : "Dear [current-ocha-focal-point:field-first-name] [current-ocha-focal-point:field-last-name],\\r\\n\\r\\nOCHA is requesting that you provide [node:field-reporting-type:name] information.\\r\\n\\r\\n[node:field-append-to-alert-email]\\r\\n\\r\\nKindly provide your information online: [node:url]\\r\\n\\r\\nKind regards,\\r\\nOCHA\\r\\n",
                  "from" : [ "node:author:mail" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
