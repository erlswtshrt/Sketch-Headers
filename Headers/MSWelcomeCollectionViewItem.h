//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import "MSWelcomeCollectionViewSelectionDrawing-Protocol.h"

@class MSWelcomeCollectionItem, MSWelcomeProgressView, NSString;

@interface MSWelcomeCollectionViewItem : NSCollectionViewItem <MSWelcomeCollectionViewSelectionDrawing>
{
    struct CGSize _designedImageViewSize;
    MSWelcomeProgressView *_progressView;
}

@property(nonatomic) __weak MSWelcomeProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (BOOL)validateRevealInCloudMenuItem:(id)arg1;
- (BOOL)validateRevealInFinderMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)fetchPreviewImage;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) MSWelcomeCollectionItem *collectionItem;
- (void)setNeedsDisplaySelection;
- (void)setSelected:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

