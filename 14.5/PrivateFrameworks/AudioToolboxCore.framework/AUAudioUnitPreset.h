//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding>
{
    long long _number;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

