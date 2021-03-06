//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, MRMediaSuggestion, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestion : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    MPArtworkCatalog *_artworkCatalog;
    MRMediaSuggestion *_mediaSuggestion;
    long long _type;
    UIImage *_artworkImage;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MRMediaSuggestion *mediaSuggestion; // @synthesize mediaSuggestion=_mediaSuggestion;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithNowPlaying:(id)arg1 title:(id)arg2 subtitle:(id)arg3 artworkCatalog:(id)arg4 iconImage:(id)arg5;
- (id)initWithMediaSuggestion:(id)arg1;

@end

