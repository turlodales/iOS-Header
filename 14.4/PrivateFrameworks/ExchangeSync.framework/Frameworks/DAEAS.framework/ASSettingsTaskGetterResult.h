//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASSettingsTaskGetterResult : NSObject
{
    int _key;
    long long _status;
    id _result;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) int key; // @synthesize key=_key;
- (id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3;

@end

