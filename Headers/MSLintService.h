//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDocumentLinting-Protocol.h"

@interface MSLintService : NSObject <MSDocumentLinting>
{
    // Error parsing type: , name: xpcConnection
    // Error parsing type: , name: linter
}

- (void).cxx_destruct;
- (void)lintDocumentAt:(id)arg1 configFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end

