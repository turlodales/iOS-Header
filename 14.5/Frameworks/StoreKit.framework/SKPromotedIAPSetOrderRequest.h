//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest
{
    CDUnknownBlockType _completionHandler;
    NSArray *_order;
    NSString *_bundleId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSArray *order; // @synthesize order=_order;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

