//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSImmutableStylePart.h>

#import <SketchModel/MSStylePart-Protocol.h>
#import <SketchModel/MSStylePartPasteboardReadWritable-Protocol.h>

@interface MSImmutableStylePart : _MSImmutableStylePart <MSStylePartPasteboardReadWritable, MSStylePart>
{
}

+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)stylePartPasteboardType;
- (void)migratePropertiesFromV119OrEarlierWithUnarchiver:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardReaderWriter;

// Remaining properties
@property(readonly, nonatomic) BOOL isEnabled;

@end

