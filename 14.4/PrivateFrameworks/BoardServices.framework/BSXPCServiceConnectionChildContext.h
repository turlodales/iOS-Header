//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext
{
    BSXPCServiceConnectionRootContext *_parent;
    _Bool _remote;
    unsigned long long _identifier;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isChild;
- (_Bool)isClient;
- (_Bool)isServer;
- (id)endpointDescription;

@end

