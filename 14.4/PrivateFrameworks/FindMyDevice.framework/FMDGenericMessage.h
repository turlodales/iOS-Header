//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDGenericMessage : NSObject <NSSecureCoding>
{
    _Bool _vibrate;
    int _soundDuration;
    NSString *_soundName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int soundDuration; // @synthesize soundDuration=_soundDuration;
@property(retain, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(nonatomic) _Bool vibrate; // @synthesize vibrate=_vibrate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

