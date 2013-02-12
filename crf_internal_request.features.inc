<?php
/**
 * @file
 * crf_internal_request.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_internal_request_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_internal_request_node_info() {
  $items = array(
    'internal_report' => array(
      'name' => t('Internal Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'internal_request' => array(
      'name' => t('Internal Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
