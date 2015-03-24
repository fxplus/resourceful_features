<?php
/**
 * @file
 * resourceful_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resourceful_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|page|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extended options',
    'weight' => '6',
    'children' => array(
      0 => 'field_icon',
      1 => 'field_old_url',
      2 => 'field_related',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extended options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|page|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_campus',
      1 => 'field_subject',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_categories|node|page|form'] = $field_group;

  return $export;
}
