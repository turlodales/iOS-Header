//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject
{
    HKKeyValueDomain *_keyValueDomain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
- (void)valueForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1;

@end

