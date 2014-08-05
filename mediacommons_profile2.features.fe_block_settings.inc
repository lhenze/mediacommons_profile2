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

  $export['views-comments_from_user-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comments_from_user-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'babyzen',
        'weight' => -1,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'tne' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tne',
        'weight' => -1,
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

  $export['views-df75a8fe563cd0ce79e677d48c01879d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'df75a8fe563cd0ce79e677d48c01879d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'babyzen',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'tne' => array(
        'region' => 'homepage_sidebar',
        'status' => 1,
        'theme' => 'tne',
        'weight' => -15,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-profiles_in_a_cluster-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'profiles_in_a_cluster-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'hub',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'babyzen',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'tne' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tne',
        'weight' => -16,
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

  $export['views-taxonomy_term_profile-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'taxonomy_term_profile-block',
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'tne' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tne',
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

  $export['views-user_search-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_search-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'babyzen',
        'weight' => 1,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'tne' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tne',
        'weight' => 1,
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
