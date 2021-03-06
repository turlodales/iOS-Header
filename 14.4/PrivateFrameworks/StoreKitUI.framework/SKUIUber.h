//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIColorScheme;
@protocol SKUIArtworkProviding;

@interface SKUIUber : NSObject
{
    SKUIColorScheme *_colorScheme;
    NSString *_text;
    id <SKUIArtworkProviding> _artworkProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SKUIArtworkProviding> artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)initWithUberDictionary:(id)arg1;

@end

