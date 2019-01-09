//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCProperty.h>

@class NSAttributedString, NSString;

@interface LOCPropertyAttributedFile : LOCProperty
{
    NSAttributedString *attributedString;
    NSString *localeCode;
    unsigned long long segmentUnit;
    BOOL createdFromData;
    id reserved1;
    id reserved2;
    id reserved3;
}

@property BOOL createdFromData; // @synthesize createdFromData;
@property unsigned long long segmentUnit; // @synthesize segmentUnit;
@property(retain) NSString *localeCode; // @synthesize localeCode;
@property(retain) NSAttributedString *attributedString; // @synthesize attributedString;
- (void).cxx_destruct;
- (id)createTranslatedInternalGlossaryWith:(id)arg1 segmentWithMrkElement:(BOOL)arg2 error:(id *)arg3;
- (id)localizedFileContentsDataWithGlossary:(id)arg1 forLocale:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 locale:(id)arg2 error:(id *)arg3;

@end
