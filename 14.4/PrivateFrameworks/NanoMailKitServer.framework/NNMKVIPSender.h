//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NNMKVIPSender : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSSet *_emailAddresses;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

