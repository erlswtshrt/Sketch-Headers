//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@interface _TtC6Sketch30MSRegistrationWindowController : NSWindowController <NSWindowDelegate>
{
    // Error parsing type: , name: completionHandlers
    // Error parsing type: , name: lockState
}

+ (void)showRegistrationWindow:(id)arg1 licenseKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)showTrialExpiredWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)showCloudSigninWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)showEnableNewCloudDocumentsWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)documentController:(id)arg1 didCloseAll:(BOOL)arg2 contextInfo:(id)arg3;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowDidLoad;

@end

