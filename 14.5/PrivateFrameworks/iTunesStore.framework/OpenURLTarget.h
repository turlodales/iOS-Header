//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenURLTarget : NSObject
{
    unsigned int _applicationState;
    struct {
        NSString *clientIdentifier;
        NSString *normalScheme;
        NSString *secureScheme;
    } _targetData;
    long long _targetIndex;
}

- (id)description;
- (id)copyURLForURL:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)init;

@end

