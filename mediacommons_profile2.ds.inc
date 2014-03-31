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
  $ds_fieldsetting->id = 'profile2|mediacommons_editor_profile|default';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'mediacommons_editor_profile';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments_from_user' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'content_from_user' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['profile2|mediacommons_editor_profile|default'] = $ds_fieldsetting;

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
    'user_info' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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
    'field_skype' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_twitter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
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
    'field_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_info';
  $ds_field->label = 'User info';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_info-block',
    'block_render' => '3',
  );
  $export['user_info'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_name_and_pic';
  $ds_field->label = 'User name and pic';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_name_and_pic-block',
    'block_render' => '3',
  );
  $export['user_name_and_pic'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_profile2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommons_editor_profile|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommons_editor_profile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_explanation',
        1 => 'comments_from_user',
        2 => 'content_from_user',
      ),
    ),
    'fields' => array(
      'field_explanation' => 'ds_content',
      'comments_from_user' => 'ds_content',
      'content_from_user' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|mediacommons_editor_profile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommons_editor_profile|form';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommons_editor_profile';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['profile2|mediacommons_editor_profile|form'] = $ds_layout;

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
        0 => 'user_info',
        1 => 'field_job_title',
        2 => 'field_organization',
        3 => 'field_telephone',
        4 => 'field_location',
        5 => 'field_skype',
        6 => 'group_contactinfo',
        7 => 'field_twitter',
        9 => 'field_email',
        11 => 'field_url',
      ),
      'left' => array(
        8 => 'posts',
        10 => 'comments_from_user',
      ),
    ),
    'fields' => array(
      'user_info' => 'header',
      'field_job_title' => 'header',
      'field_organization' => 'header',
      'field_telephone' => 'header',
      'field_location' => 'header',
      'field_skype' => 'header',
      'group_contactinfo' => 'header',
      'field_twitter' => 'header',
      'posts' => 'left',
      'field_email' => 'header',
      'comments_from_user' => 'left',
      'field_url' => 'header',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile' => 'profile',
      ),
      'header' => array(
        'h-card' => 'h-card',
        'vcard' => 'vcard',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['profile2|mediacommonsprofile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommonsprofile|form';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommonsprofile';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_profile2',
        1 => 'field_job_title',
        2 => 'field_organization',
        3 => 'field_location',
        4 => 'field_email',
        5 => 'field_url',
        6 => 'field_telephone',
        7 => 'field_skype',
        8 => 'field_twitter',
        9 => 'group_basicinfo',
        10 => 'group_contact',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_profile2' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_organization' => 'ds_content',
      'field_location' => 'ds_content',
      'field_email' => 'ds_content',
      'field_url' => 'ds_content',
      'field_telephone' => 'ds_content',
      'field_skype' => 'ds_content',
      'field_twitter' => 'ds_content',
      'group_basicinfo' => 'ds_content',
      'group_contact' => 'ds_content',
      '_add_existing_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|mediacommonsprofile|form'] = $ds_layout;

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'account',
        1 => 'picture',
        2 => 'timezone',
        3 => 'profile_mediacommonsprofile',
      ),
    ),
    'fields' => array(
      'account' => 'ds_content',
      'picture' => 'ds_content',
      'timezone' => 'ds_content',
      'profile_mediacommonsprofile' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
