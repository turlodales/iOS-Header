//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDMRAVEndpoint : HMFObject
{
    void *_mravEndpoint;
}

@property(readonly, nonatomic) void *mravEndpoint; // @synthesize mravEndpoint=_mravEndpoint;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMRAVEndpoint:(void *)arg1;

@end

