//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCollapsibleHeaderInspectorItem.h"

@class NSButton;
@protocol MSTextHeaderInspectorItemDelegate;

@interface MSTextHeaderInspectorItem : MSCollapsibleHeaderInspectorItem
{
    BOOL _detailSettingsVisible;
    BOOL _detailSettingsDisclosed;
    BOOL _detailSettingsEnabled;
    NSButton *_detailSettingsButton;
}

@property(nonatomic) BOOL detailSettingsEnabled; // @synthesize detailSettingsEnabled=_detailSettingsEnabled;
@property(nonatomic) BOOL detailSettingsDisclosed; // @synthesize detailSettingsDisclosed=_detailSettingsDisclosed;
@property(nonatomic) BOOL detailSettingsVisible; // @synthesize detailSettingsVisible=_detailSettingsVisible;
@property(retain, nonatomic) NSButton *detailSettingsButton; // @synthesize detailSettingsButton=_detailSettingsButton;
- (void).cxx_destruct;
- (void)toggleSettings:(id)arg1;
- (void)updateUI;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <MSTextHeaderInspectorItemDelegate> delegate; // @dynamic delegate;

@end

