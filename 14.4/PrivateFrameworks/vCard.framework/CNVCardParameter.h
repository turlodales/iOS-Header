//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardParameter : NSObject
{
    NSString *_name;
    NSString *_value;
}

+ (id)parameterWithName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

