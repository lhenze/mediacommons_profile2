<?php
/**
 * @file
 * mediacommons_profile2.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_profile2_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-user_info-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'babyzen',
        'weight' => 0,
      ),
      'intransition' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intransition',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
