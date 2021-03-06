//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>
{
    NSString *_text;
    double _offset;
}

+ (_Bool)supportsSecureCoding;
+ (id)lyricLineWithText:(id)arg1 offset:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLineWithText:(id)arg1 offset:(double)arg2;

@end

