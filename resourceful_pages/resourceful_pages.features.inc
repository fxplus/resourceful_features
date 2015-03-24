<?php
/**
 * @file
 * resourceful_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resourceful_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function resourceful_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('<em>A webpage to display in the site</em>. It is easier to add a \'sub-page\' from an existing one. '),
      'has_title' => '1',
      'title_label' => t('Short title (optional)'),
      'help' => t('For usage in menu items etc'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
