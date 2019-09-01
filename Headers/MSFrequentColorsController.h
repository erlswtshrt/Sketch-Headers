//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSFrequentObjectsController.h"

@class MSColor, NSString;
@protocol MSFrequentColorsControllerDelegate;

@interface MSFrequentColorsController : MSFrequentObjectsController
{
    MSColor *_color;
    long long _colorModel;
}

+ (id)menuItemForColorCounter:(id)arg1 target:(id)arg2 action:(SEL)arg3 documentColorSpace:(id)arg4 colorModel:(long long)arg5;
+ (id)menuItemAttributedTitleForColorCounter:(id)arg1 colorModel:(long long)arg2;
+ (id)previewImageForColorCounter:(id)arg1 documentColorSpace:(id)arg2;
@property(nonatomic) long long colorModel; // @synthesize colorModel=_colorModel;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)frequentColorPicked:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refreshMenuItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MSFrequentColorsControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

