//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSDictionary, NSString, NSURL;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool hiddenFromDefaultExpandedView; // @dynamic hiddenFromDefaultExpandedView;
@property(nonatomic) _Bool thumbnailHidden; // @dynamic thumbnailHidden;
@property(copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo; // @dynamic thumbnailGeneratorUserInfo;
@property(copy, nonatomic) NSString *uniformType; // @dynamic uniformType;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSURL *URL; // @dynamic URL;
@property(nonatomic) long long type; // @dynamic type;

@end

