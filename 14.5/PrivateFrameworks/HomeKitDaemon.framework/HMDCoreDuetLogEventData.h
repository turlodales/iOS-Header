//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HMDCoreDuetLogEventData : NSObject
{
    NSDictionary *_metadata;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *value; // @synthesize value=_value;
@property(readonly, copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (id)initWithMetadata:(id)arg1 value:(id)arg2;

@end

