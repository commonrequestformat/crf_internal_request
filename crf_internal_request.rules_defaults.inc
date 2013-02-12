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
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-internal-request:author:mail" ],
            "subject" : "Internal Report provided by [node:author:field-first-name] [node:author:field-last-name] in [node:field-internal-request:title] is now finalised",
            "message" : "Dear [node:field-internal-request:author:field-first-name] [node:field-internal-request:author:field-last-name],\\r\\n\\r\\nKindly note that the Internal Report by [node:author:field-first-name] [node:author:field-last-name] in the Information Request [node:field-internal-request:title] has been finalised.  The information can be viewed online: [node:url]\\r\\n\\r\\nNo action is required on your part at this time.\\r\\n\\r\\nKind regards,\\r\\nOCHA\\r\\n",
            "from" : [ "node:author:mail" ],
            "language" : [ "" ]
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
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "52310416" : "52310416" } },
            "subject" : "New Internal Request (from OCHA)",
            "message" : "Kindly provide your information online: [node:url]\\r\\n\\r\\nKind regards,\\r\\nOCHA",
            "from" : [ "node:author:mail" ]
          }
        }
      ]
    }
  }');
  return $items;
}
