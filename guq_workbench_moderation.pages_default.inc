<?php
/**
 * @file
 * guq_workbench_moderation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function guq_workbench_moderation_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'myworkbench__gu-q-my-workbench';
  $handler->task = 'myworkbench';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 101;
  $handler->conf = array(
    'title' => 'GU-Q - My Workbench',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'gu-q-my-workbench',
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'GU-Q Workbench';
  $display->uuid = 'ed6f33f4-afcf-4126-b4b0-8dab0cf3902b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'myworkbench_panel_context_sample';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2d6ca95b-33b3-480b-a943-059a21caa3aa';
  $pane->panel = 'left_above';
  $pane->type = 'views';
  $pane->subtype = 'workbench_current_user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '2d6ca95b-33b3-480b-a943-059a21caa3aa';
  $display->content['new-2d6ca95b-33b3-480b-a943-059a21caa3aa'] = $pane;
  $display->panels['left_above'][0] = 'new-2d6ca95b-33b3-480b-a943-059a21caa3aa';
  $pane = new stdClass();
  $pane->pid = 'new-a0a60a72-dc21-42bd-9972-a75e10bf2cdd';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'guq_workbench_recent_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = 'a0a60a72-dc21-42bd-9972-a75e10bf2cdd';
  $display->content['new-a0a60a72-dc21-42bd-9972-a75e10bf2cdd'] = $pane;
  $display->panels['middle'][0] = 'new-a0a60a72-dc21-42bd-9972-a75e10bf2cdd';
  $pane = new stdClass();
  $pane->pid = 'new-85487a1f-fb84-4ca4-81ee-8fca34fea060';
  $pane->panel = 'right_above';
  $pane->type = 'views';
  $pane->subtype = 'workbench_edited';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '85487a1f-fb84-4ca4-81ee-8fca34fea060';
  $display->content['new-85487a1f-fb84-4ca4-81ee-8fca34fea060'] = $pane;
  $display->panels['right_above'][0] = 'new-85487a1f-fb84-4ca4-81ee-8fca34fea060';
  $pane = new stdClass();
  $pane->pid = 'new-8c603e77-44b0-40d2-8a2e-2eefd95e4654';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sample Variant',
    'title' => 'My Workbench created through Panels.',
    'body' => '<em>You are viewing "My Workbench" as created by Page Manager and Panels. The module Views Content Panes is also recommended. Please read the <a href="http://drupal.org/node/1226174" target="_blank">Workbench documentation</a> for the best practices in using Panels and Page Manager with Workbench.</em>',
    'format' => 'filtered_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '8c603e77-44b0-40d2-8a2e-2eefd95e4654';
  $display->content['new-8c603e77-44b0-40d2-8a2e-2eefd95e4654'] = $pane;
  $display->panels['top'][0] = 'new-8c603e77-44b0-40d2-8a2e-2eefd95e4654';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a0a60a72-dc21-42bd-9972-a75e10bf2cdd';
  $handler->conf['display'] = $display;
  $export['myworkbench__gu-q-workbench'] = $handler;

  return $export;
}
