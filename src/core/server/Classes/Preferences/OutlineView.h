// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

#import <Cocoa/Cocoa.h>

@class PreferencesManager;
@class XMLCompiler;

@interface OutlineView : NSObject {
@protected
  BOOL ischeckbox_;

  IBOutlet NSOutlineView* outlineview_;
  IBOutlet PreferencesManager* preferencesManager_;
  IBOutlet XMLCompiler* xmlCompiler_;

  // for OutlineView_checkbox
  IBOutlet NSSearchField* searchText_;
  IBOutlet NSButton* showEnabledOnly_;
}

@end
