//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogStatement : NSObject
{
    long long _type;
    unsigned long long _indentLevel;
    NSString *_prefix;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)init;

@end

