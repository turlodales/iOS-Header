//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface NMSObfuscatableDescriptionItem : NSObject
{
    _Bool _obfuscated;
    NSString *_format;
    id <NSObject> _value;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool obfuscated; // @synthesize obfuscated=_obfuscated;
@property(retain, nonatomic) id <NSObject> value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(_Bool)arg3;

@end

