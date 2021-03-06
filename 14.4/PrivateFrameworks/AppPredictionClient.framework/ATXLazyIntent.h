//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INIntent, NSData;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject
{
    INIntent *_intent;
    NSData *_intentData;
    id <ATXLazyIntentDelegateProtocol> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ATXLazyIntentDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)handleMemoryPressure;
- (_Bool)isDeserialized;
- (id)_deserializeIntent;
@property(readonly, nonatomic) NSData *intentData;
@property(readonly, nonatomic) INIntent *intent;
- (id)initWithIntent:(id)arg1 intentData:(id)arg2;
- (id)initWithIntentData:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)init;

@end

