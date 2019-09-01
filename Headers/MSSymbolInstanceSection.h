//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSInspectorItemProvider-Protocol.h"
#import "MSInspectorTableViewManagerDelegate-Protocol.h"

@class MSCollapsibleHeaderInspectorItem, MSInspectorTableViewManager, MSSharedSymbolStylesInspectorItem, MSTableContainerInspectorItem, NSArray, NSMutableArray, NSMutableDictionary, NSString, _TtC6Sketch29MSSymbolInstanceInspectorItem;
@protocol MSSymbolInstanceSectionDelegate, MSSymbolOverrideItemDescription;

@interface MSSymbolInstanceSection : MSBaseInspectorSection <MSInspectorTableViewManagerDelegate, MSInspectorItemProvider>
{
    NSArray *_selectedOverrides;
    MSSharedSymbolStylesInspectorItem *_sharedStyleItem;
    _TtC6Sketch29MSSymbolInstanceInspectorItem *_symbolItem;
    MSCollapsibleHeaderInspectorItem *_headerItem;
    NSMutableArray<MSSymbolOverrideItemDescription> *_overrideItemDescriptions;
    MSTableContainerInspectorItem *_overrideContainerItem;
    MSInspectorTableViewManager *_tableViewManager;
    NSMutableDictionary *_rowHeightCache;
}

@property(retain, nonatomic) NSMutableDictionary *rowHeightCache; // @synthesize rowHeightCache=_rowHeightCache;
@property(retain, nonatomic) MSInspectorTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) MSTableContainerInspectorItem *overrideContainerItem; // @synthesize overrideContainerItem=_overrideContainerItem;
@property(retain, nonatomic) NSMutableArray<MSSymbolOverrideItemDescription> *overrideItemDescriptions; // @synthesize overrideItemDescriptions=_overrideItemDescriptions;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) _TtC6Sketch29MSSymbolInstanceInspectorItem *symbolItem; // @synthesize symbolItem=_symbolItem;
@property(retain, nonatomic) MSSharedSymbolStylesInspectorItem *sharedStyleItem; // @synthesize sharedStyleItem=_sharedStyleItem;
@property(copy, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
- (void).cxx_destruct;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;
- (id)userInterfaceCacheForItem:(id)arg1;
- (id)parentViewControllerForTableViewManager:(id)arg1;
- (id)sectionsForTableViewManager:(id)arg1;
- (BOOL)wantSeparatorAtIndex:(unsigned long long)arg1;
- (id)rowHeightCacheKeyForOverrideRepresentation:(id)arg1 shouldShowLabel:(BOOL)arg2 indentationLevel:(long long)arg3;
- (double)getAndCacheHeightForOverrideRepresentation:(id)arg1 shouldShowLabel:(BOOL)arg2 indentationLevel:(long long)arg3;
- (void)cacheHeight:(id)arg1 forOverrideRepresentation:(id)arg2 shouldShowLabel:(BOOL)arg3 indentationLevel:(long long)arg4;
- (double)heightOfItemViewAtIndex:(unsigned long long)arg1;
- (void)recycleItem:(id)arg1;
- (BOOL)displaysLabelAtIndex:(unsigned long long)arg1;
- (id)vendItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)refreshIfNecessary:(id)arg1;
- (BOOL)diffContainsChangeRequiringReload:(id)arg1;
- (id)uniqueArtboardIDsOfSelectedLayers;
- (void)recursivelyGatherOverrideItemsForOverrides:(id)arg1 into:(id)arg2;
- (void)updateItems;
- (void)setLayers:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MSSymbolInstanceSectionDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

