//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3Client, ML3MediaLibraryWriter, ML3MusicLibrary;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport
{
    ML3MusicLibrary *_library;
    ML3MediaLibraryWriter *_writer;
    ML3Client *_client;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ML3Client *client; // @synthesize client=_client;
@property(readonly, nonatomic) ML3MediaLibraryWriter *writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4;

@end

