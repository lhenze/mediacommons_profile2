<?php
/**
 * @file
 * mediacommons_profile2.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_profile2_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|mediacommonsprofile|account';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'mediacommonsprofile';
  $ds_fieldsetting->view_mode = 'account';
  $ds_fieldsetting->settings = array(
    'comments_from_user' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'posts' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_job_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-job-title title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-country-name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_organization' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'p-org org',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_skype' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_twitter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_avatar' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'u-photo photo',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_full_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['profile2|mediacommonsprofile|account'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mediacommons_profile2_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'comments_from_user';
  $ds_field->label = 'Comments';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|comments_from_user-block',
    'block_render' => '2',
  );
  $export['comments_from_user'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'posts';
  $ds_field->label = 'Posts';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|content_from_user-block',
    'block_render' => '2',
  );
  $export['posts'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_profile2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommonsprofile|account';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommonsprofile';
  $ds_layout->view_mode = 'account';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_user_avatar',
        1 => 'field_full_name',
        2 => 'field_job_title',
        3 => 'field_organization',
        4 => 'field_location',
        5 => 'group_contactinfo',
        7 => 'field_email',
        10 => 'field_url',
        11 => 'field_telephone',
        12 => 'field_skype',
        13 => 'field_twitter',
      ),
      'left' => array(
        6 => 'posts',
        8 => 'comments_from_user',
      ),
      'right' => array(
        9 => 'field_embed',
      ),
    ),
    'fields' => array(
      'field_user_avatar' => 'header',
      'field_full_name' => 'header',
      'field_job_title' => 'header',
      'field_organization' => 'header',
      'field_location' => 'header',
      'group_contactinfo' => 'header',
      'posts' => 'left',
      'field_email' => 'header',
      'comments_from_user' => 'left',
      'field_embed' => 'right',
      'field_url' => 'header',
      'field_telephone' => 'header',
      'field_skype' => 'header',
      'field_twitter' => 'header',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile' => 'profile',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => 'ttle',
  );
  $export['profile2|mediacommonsprofile|account'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommonsprofile|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommonsprofile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'footer',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => 'role="article"',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['profile2|mediacommonsprofile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'profile_mediacommonsprofile',
      ),
    ),
    'fields' => array(
      'profile_mediacommonsprofile' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile' => 'profile',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}
