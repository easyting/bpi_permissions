<?php
/**
 * @file
 * bpi_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bpi_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer bpi.
  $permissions['administer bpi'] = array(
    'name' => 'administer bpi',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'bpi',
  );

  // Exported permission: bpi push content.
  $permissions['bpi push content'] = array(
    'name' => 'bpi push content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'bpi',
  );

  // Exported permission: bpi syndicate content.
  $permissions['bpi syndicate content'] = array(
    'name' => 'bpi syndicate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'bpi',
  );

  // Exported permission: delete bpi content.
  $permissions['delete bpi content'] = array(
    'name' => 'delete bpi content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'bpi',
  );

  // Exported permission: view bpi statistics.
  $permissions['view bpi statistics'] = array(
    'name' => 'view bpi statistics',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'bpi',
  );

  return $permissions;
}
