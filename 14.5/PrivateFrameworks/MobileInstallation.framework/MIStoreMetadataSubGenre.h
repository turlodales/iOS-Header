//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>
#import <MobileInstallation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_genre;
    NSNumber *_genreID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGenre:(id)arg1 genreID:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

