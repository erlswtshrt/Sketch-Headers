//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImageView.h"

@class NSImage;

@interface MSImageOverrideView : MSImageView
{
    NSImage *_placeholderImage;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) BOOL displaysPlaceholder;
- (void)removeOverrideImage:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

