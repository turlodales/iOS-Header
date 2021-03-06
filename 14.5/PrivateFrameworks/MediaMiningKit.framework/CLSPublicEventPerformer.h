//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CLSPublicEventPerformer : NSObject <NSSecureCoding>
{
    NSString *_localizedName;
    NSString *_iTunesIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *iTunesIdentifier; // @synthesize iTunesIdentifier=_iTunesIdentifier;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 iTunesIdentifier:(id)arg2;

@end

