//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMNumberFormatter : NSObject
{
    int _format;
    int _language;
    void **_numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;
- (id)stringForNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;

@end

