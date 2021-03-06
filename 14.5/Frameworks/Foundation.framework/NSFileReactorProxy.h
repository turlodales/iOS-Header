//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_clientProxy;
- (_Bool)allowedForURL:(id)arg1;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)invalidate;
- (void)forwardUsingProxy:(id)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;
- (id)client;
- (void)dealloc;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;

@end

