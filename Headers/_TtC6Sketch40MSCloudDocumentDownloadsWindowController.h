//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSProgress;

@interface _TtC6Sketch40MSCloudDocumentDownloadsWindowController : NSWindowController
{
    // Error parsing type: , name: downloads
    // Error parsing type: , name: downloadsProgress
}

+ (void)showDownloadWindow:(id)arg1 share:(id)arg2 displayAfterDownload:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)isDownloadingShare:(id)arg1;
+ (void)showDownloadWindow:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
@property(nonatomic, retain) NSProgress *downloadsProgress; // @synthesize downloadsProgress;

@end

