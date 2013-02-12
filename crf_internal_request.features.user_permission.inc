<?php
/**
 * @file
 * crf_internal_request.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_internal_request_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer reporting_types vocabulary terms.
  $permissions['administer reporting_types vocabulary terms'] = array(
    'name' => 'administer reporting_types vocabulary terms',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: create internal_report content.
  $permissions['create internal_report content'] = array(
    'name' => 'create internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create internal_request content.
  $permissions['create internal_request content'] = array(
    'name' => 'create internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any internal_report content.
  $permissions['delete any internal_report content'] = array(
    'name' => 'delete any internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any internal_request content.
  $permissions['delete any internal_request content'] = array(
    'name' => 'delete any internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own internal_report content.
  $permissions['delete own internal_report content'] = array(
    'name' => 'delete own internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own internal_request content.
  $permissions['delete own internal_request content'] = array(
    'name' => 'delete own internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in reporting_types.
  $permissions['delete terms in reporting_types'] = array(
    'name' => 'delete terms in reporting_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any internal_report content.
  $permissions['edit any internal_report content'] = array(
    'name' => 'edit any internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any internal_request content.
  $permissions['edit any internal_request content'] = array(
    'name' => 'edit any internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own internal_report content.
  $permissions['edit own internal_report content'] = array(
    'name' => 'edit own internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own internal_request content.
  $permissions['edit own internal_request content'] = array(
    'name' => 'edit own internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in reporting_types.
  $permissions['edit terms in reporting_types'] = array(
    'name' => 'edit terms in reporting_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: view any unpublished internal_report content.
  $permissions['view any unpublished internal_report content'] = array(
    'name' => 'view any unpublished internal_report content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished internal_request content.
  $permissions['view any unpublished internal_request content'] = array(
    'name' => 'view any unpublished internal_request content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
