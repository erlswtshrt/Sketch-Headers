//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSSharedStylesPopUpButtonCellDelegate-Protocol.h"

@class MSForeignObjectMenuBuilder, MSShareableObjectPopUpButton, MSSharedObject, NSString, NSTextField;

@interface MSSharedStylesInspectorItem : MSInspectorItem <MSSharedStylesPopUpButtonCellDelegate>
{
    MSShareableObjectPopUpButton *_sharedObjectsPopUpButton;
    NSTextField *_editNameField;
    MSSharedObject *_renamingObject;
    CDUnknownBlockType _renameBlock;
    MSForeignObjectMenuBuilder *_menuBuilder;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(copy, nonatomic) CDUnknownBlockType renameBlock; // @synthesize renameBlock=_renameBlock;
@property(retain, nonatomic) MSSharedObject *renamingObject; // @synthesize renamingObject=_renamingObject;
@property(retain, nonatomic) NSTextField *editNameField; // @synthesize editNameField=_editNameField;
@property(retain, nonatomic) MSShareableObjectPopUpButton *sharedObjectsPopUpButton; // @synthesize sharedObjectsPopUpButton=_sharedObjectsPopUpButton;
- (void).cxx_destruct;
- (id)cachedImageForPopupButtonCell:(id)arg1 withSharedObject:(id)arg2;
- (void)popupButtonCell:(id)arg1 didCreatePreviewImage:(id)arg2 forSharedObject:(id)arg3;
- (void)renameSharedObjectAction:(id)arg1;
- (void)renameSharedObject:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateDisplayedValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

