/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorkbook, NSString, CMArchiveManager, OIXMLDocument, NSMutableArray, OIXMLElement;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
    unsigned int mRealSheetCount;
    int mWidth;
    int mHeight;
    EDWorkbook *edWorkbook;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    CMArchiveManager *mArchiver;
    NSString *mFileName;
    unsigned int mSheetIndex;
    boolmIsFirstMappedSheet;
    boolmIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    float mTabPosition;
    unsigned int mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

+ (id)cssStyleCache;
+ (void)setBaseDate1904:(BOOL)arg1;
+ (id)baseDate;
+ (id)borderStyleCache;
+ (id)borderWidthCache;

- (bool)isMultiPage;
- (BOOL)hasMultipleSheets;
- (void)mapBodyStyleAt:(id)arg1;
- (id)createSheetMapperWithEdSheet:(id)arg1;
- (id)_createStringForSheet:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)_createMainPageAndReturnFront;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_mainPageBack;
- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;
- (void)startMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)finishMappingWithState:(id)arg1;
- (void)setFileName:(id)arg1;
- (id)archiver;
- (struct CGSize { float x1; float x2; })pageSizeForDevice;
- (id)documentTitle;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)workbook;
- (id)styleMatrix;
- (id)fileName;
- (void)dealloc;

@end
