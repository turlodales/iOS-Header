//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@protocol SFPin <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int pinBehavior;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *resultID;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) SFColor *pinColor;
@property(retain, nonatomic) SFLatLng *location;
@end

