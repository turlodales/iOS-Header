//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUJSRationalExport-Protocol.h>

@interface NUJSRational : NSObject <NUJSRationalExport>
{
    long long _numerator;
    long long _denominator;
}

@property long long denominator;
@property long long numerator;
- (id)initWithNumerator:(long long)arg1 denominator:(long long)arg2;
- (id)init;
- (double)toDouble;

@end

