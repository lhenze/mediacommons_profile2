<?php
/**
 * @file
 * mediacommons_profile2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mediacommons_profile2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'contributor' => 'contributor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any mediacommonsprofile profile'.
  $permissions['edit any mediacommonsprofile profile'] = array(
    'name' => 'edit any mediacommonsprofile profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own mediacommonsprofile profile'.
  $permissions['edit own mediacommonsprofile profile'] = array(
    'name' => 'edit own mediacommonsprofile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any mediacommonsprofile profile'.
  $permissions['view any mediacommonsprofile profile'] = array(
    'name' => 'view any mediacommonsprofile profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own mediacommonsprofile profile'.
  $permissions['view own mediacommonsprofile profile'] = array(
    'name' => 'view own mediacommonsprofile profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
