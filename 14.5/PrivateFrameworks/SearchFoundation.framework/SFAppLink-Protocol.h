//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@protocol SFAppLink <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int imageAlign;
@property(retain, nonatomic) SFImage *image;
@property(retain, nonatomic) SFPunchout *appPunchout;
@property(copy, nonatomic) NSString *title;
@end

