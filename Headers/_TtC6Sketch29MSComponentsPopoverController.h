//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSDocument;

@interface _TtC6Sketch29MSComponentsPopoverController : NSViewController
{
    // Error parsing type: , name: document
    // Error parsing type: , name: componentsPane.storage
    // Error parsing type: , name: currentSession
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)restoreWithRestorationInfo:(id)arg1 owner:(id)arg2 relativeTo:(id)arg3 selectingComponent:(id)arg4 pickHandler:(CDUnknownBlockType)arg5;
- (id)hidePopoverAndReturnRestorationInfoFor:(id)arg1;
- (void)closeComponentPopoverFor:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pickTextStyleWithRelativeToView:(id)arg1 owner:(id)arg2 preselectingTextStyle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pickLayerStyleWithRelativeToView:(id)arg1 owner:(id)arg2 preselectingLayerStyle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pickSymbolMasterWithRelativeToView:(id)arg1 owner:(id)arg2 preselectingSymbol:(id)arg3 enableHideSymbolItem:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDocument:(id)arg1;
@property(nonatomic, readonly) MSDocument *document; // @synthesize document;

@end

