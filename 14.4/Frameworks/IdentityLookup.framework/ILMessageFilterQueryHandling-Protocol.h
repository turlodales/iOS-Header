//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdentityLookup/NSObject-Protocol.h>

@class ILMessageFilterExtensionContext, ILMessageFilterQueryRequest;

@protocol ILMessageFilterQueryHandling <NSObject>
- (void)handleQueryRequest:(ILMessageFilterQueryRequest *)arg1 context:(ILMessageFilterExtensionContext *)arg2 completion:(void (^)(ILMessageFilterQueryResponse *))arg3;
@end

