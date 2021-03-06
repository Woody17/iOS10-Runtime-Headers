/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebView : UIView <UIScrollViewDelegate> {
    unsigned long long  _activeFocusedStateRetainCount;
    bool  _allowsBackForwardNavigationGestures;
    bool  _allowsLinkPreview;
    bool  _allowsViewportShrinkToFit;
    bool  _commitDidRestoreScrollPosition;
    struct RetainPtr<WKWebViewConfiguration> { 
        void *m_ptr; 
    }  _configuration;
    struct RetainPtr<WKContentView> { 
        void *m_ptr; 
    }  _contentView;
    bool  _currentlyAdjustingScrollViewInsetsForKeyboard;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _customContentFixedOverlayView;
    struct RetainPtr<UIView<WKWebViewContentProvider> > { 
        void *m_ptr; 
    }  _customContentView;
    bool  _delayUpdateVisibleContentRects;
    bool  _didScrollSinceLastTimerFire;
    int  _dynamicViewportUpdateMode;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _enclosingScrollViewScrollTimer;
    bool  _fastClickingIsDisabled;
    unsigned long long  _firstPaintAfterCommitLoadTransactionID;
    unsigned long long  _firstTransactionIDAfterPageRestore;
    struct Optional<CGRect> { 
        bool m_isEngaged; 
        struct type { 
            unsigned char __lx[32]; 
        } m_value; 
    }  _frozenUnobscuredContentRect;
    struct Optional<CGRect> { 
        bool m_isEngaged; 
        struct type { 
            unsigned char __lx[32]; 
        } m_value; 
    }  _frozenVisibleContentRect;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> > { 
        struct __compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> > { 
            struct ViewGestureController {} *__first_; 
        } __ptr_; 
    }  _gestureController;
    bool  _hadDelayedUpdateVisibleContentRects;
    bool  _hasCommittedLoadForMainFrame;
    bool  _haveSetObscuredInsets;
    double  _initialScaleFactor;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKInputDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKInputDelegate> > { 
        id m_weakReference; 
    }  _inputDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputViewBounds;
    long long  _interfaceOrientationOverride;
    bool  _isChangingObscuredInsetsInteractively;
    double  _lastAdjustmentForScroller;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumUnobscuredSizeOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumLayoutSizeOverride;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> > { 
        struct __compressed_pair<WebKit::NavigationState *, std::__1::default_delete<WebKit::NavigationState> > { 
            struct NavigationState {} *__first_; 
        } __ptr_; 
    }  _navigationState;
    bool  _needsResetViewStateAfterCommitLoadForMainFrame;
    bool  _needsToRestoreScrollPosition;
    bool  _needsToRestoreUnobscuredCenter;
    struct FloatSize { 
        float m_width; 
        float m_height; 
    }  _obscuredInsetWhenSaved;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _obscuredInsets;
    unsigned long long  _observedRenderingProgressEvents;
    bool  _overridesInterfaceOrientation;
    bool  _overridesMaximumUnobscuredSize;
    bool  _overridesMinimumLayoutSize;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    }  _remoteObjectRegistry;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _resizeAnimationTransformAdjustments;
    struct Optional<unsigned long long> { 
        bool m_isEngaged; 
        struct type { 
            unsigned char __lx[8]; 
        } m_value; 
    }  _resizeAnimationTransformTransactionID;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _resizeAnimationView;
    double  _scaleToRestore;
    struct FloatPoint { 
        float m_x; 
        float m_y; 
    }  _scrollOffsetToRestore;
    struct RetainPtr<WKScrollView> { 
        void *m_ptr; 
    }  _scrollView;
    struct Color { 
        unsigned int m_color; 
        bool m_valid; 
    }  _scrollViewBackgroundColor;
    struct Vector<std::__1::function<void ()>, 0, WTF::CrashOnOverflow, 16>="m_buffer"^{function<void ()> {}  _snapshotsDeferredDuringResize;
    double  _totalScrollViewBottomInsetAdjustmentForKeyboard;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> > { 
        struct __compressed_pair<WebKit::UIDelegate *, std::__1::default_delete<WebKit::UIDelegate> > { 
            struct UIDelegate {} *__first_; 
        } __ptr_; 
    }  _uiDelegate;
    struct FloatPoint { 
        float m_x; 
        float m_y; 
    }  _unobscuredCenterToRestore;
    bool  _viewportMetaTagCameFromImageDocument;
    double  _viewportMetaTagWidth;
    bool  _viewportMetaTagWidthWasExplicit;
}

@property (nonatomic) <WKUIDelegate> *UIDelegate;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *_MIMEType;
@property (setter=_setAddsVisitedLinks:, nonatomic) bool _addsVisitedLinks;
@property (nonatomic, readonly) bool _allowsDoubleTapGestures;
@property (getter=_allowsMediaDocumentInlinePlayback, setter=_setAllowsMediaDocumentInlinePlayback:, nonatomic) bool _allowsMediaDocumentInlinePlayback;
@property (setter=_setAllowsRemoteInspection:, nonatomic) bool _allowsRemoteInspection;
@property (setter=_setAllowsViewportShrinkToFit:, nonatomic) bool _allowsViewportShrinkToFit;
@property (setter=_setApplicationNameForUserAgent:, copy) NSString *_applicationNameForUserAgent;
@property (setter=_setBackgroundExtendsBeyondPage:, nonatomic) bool _backgroundExtendsBeyondPage;
@property (nonatomic, readonly) NSArray *_certificateChain;
@property (nonatomic, readonly) NSURL *_committedURL;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _computedContentInset;
@property (nonatomic, readonly) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _contentVisibleRect;
@property (setter=_setCustomUserAgent:, copy) NSString *_customUserAgent;
@property (nonatomic, readonly) NSData *_dataForDisplayedPDF;
@property (setter=_setDiagnosticLoggingDelegate:, nonatomic) <_WKDiagnosticLoggingDelegate> *_diagnosticLoggingDelegate;
@property (getter=_isDisplayingPDF, nonatomic, readonly) bool _displayingPDF;
@property (getter=_isDisplayingStandaloneImageDocument, nonatomic, readonly) bool _displayingStandaloneImageDocument;
@property (getter=_isDisplayingStandaloneMediaDocument, nonatomic, readonly) bool _displayingStandaloneMediaDocument;
@property (getter=_isEditable, setter=_setEditable:, nonatomic) bool _editable;
@property (setter=_setFindDelegate:, nonatomic) <_WKFindDelegate> *_findDelegate;
@property (setter=_setFixedLayoutSize:, nonatomic) struct CGSize { double x1; double x2; } _fixedLayoutSize;
@property (setter=_setFormDelegate:, nonatomic) <_WKFormDelegate> *_formDelegate;
@property (setter=_setGapBetweenPages:, nonatomic) double _gapBetweenPages;
@property (nonatomic, readonly) WKBrowsingContextHandle *_handle;
@property (setter=_setHistoryDelegate:, nonatomic) <WKHistoryDelegatePrivate> *_historyDelegate;
@property (setter=_setInputDelegate:, nonatomic) <_WKInputDelegate> *_inputDelegate;
@property (setter=_setInterfaceOrientationOverride:, nonatomic) long long _interfaceOrientationOverride;
@property (nonatomic, readonly) bool _isBackground;
@property (setter=_setLayoutMode:, nonatomic) unsigned long long _layoutMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _maximumUnobscuredSizeOverride;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _minimumLayoutSizeOverride;
@property (nonatomic, readonly) bool _networkRequestsInProgress;
@property (setter=_setObscuredInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _obscuredInsets;
@property (setter=_setObservedRenderingProgressEvents:, nonatomic) unsigned long long _observedRenderingProgressEvents;
@property (readonly) unsigned long long _pageCount;
@property (setter=_setPageLength:, nonatomic) double _pageLength;
@property (setter=_setPageZoomFactor:, nonatomic) double _pageZoomFactor;
@property (setter=_setPaginationBehavesLikeColumns:, nonatomic) bool _paginationBehavesLikeColumns;
@property (setter=_setPaginationLineGridEnabled:, nonatomic) bool _paginationLineGridEnabled;
@property (setter=_setPaginationMode:, nonatomic) long long _paginationMode;
@property (nonatomic, readonly) <_WKWebViewPrintProvider> *_printProvider;
@property (setter=_setRemoteInspectionNameOverride:, nonatomic, copy) NSString *_remoteInspectionNameOverride;
@property (nonatomic, readonly) id _remoteObjectRegistry;
@property (nonatomic, readonly) NSArray *_scrollPerformanceData;
@property (setter=_setScrollPerformanceDataCollectionEnabled:, nonatomic) bool _scrollPerformanceDataCollectionEnabled;
@property (nonatomic, readonly) long long _selectionGranularity;
@property (nonatomic, readonly) _WKSessionState *_sessionState;
@property (nonatomic, readonly) NSData *_sessionStateData;
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (getter=_isShowingNavigationGestureSnapshot, nonatomic, readonly) bool _showingNavigationGestureSnapshot;
@property (nonatomic, readonly) NSString *_suggestedFilenameForDisplayedPDF;
@property (nonatomic, readonly) bool _supportsTextZoom;
@property (setter=_setTextZoomFactor:, nonatomic) double _textZoomFactor;
@property (nonatomic, readonly) NSURL *_unreachableURL;
@property (nonatomic, readonly) NSString *_userAgent;
@property (setter=_setUserContentExtensionsEnabled:, nonatomic) bool _userContentExtensionsEnabled;
@property (setter=_setViewScale:, nonatomic) double _viewScale;
@property (nonatomic, readonly) int _webProcessIdentifier;
@property (nonatomic, readonly) bool _webProcessIsResponsive;
@property (nonatomic, readonly) _WKWebViewPrintFormatter *_webViewPrintFormatter;
@property (nonatomic) bool allowsBackForwardNavigationGestures;
@property (nonatomic) bool allowsLinkPreview;
@property (nonatomic, readonly) WKBackForwardList *backForwardList;
@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoForward;
@property (nonatomic, readonly, copy) NSArray *certificateChain;
@property (nonatomic, readonly, copy) WKWebViewConfiguration *configuration;
@property (nonatomic, copy) NSString *customUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic) bool forceIPadStyleZoomOnInputFocus;
@property (nonatomic, readonly) bool hasOnlySecureContent;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) <WKNavigationDelegate> *navigationDelegate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) struct __SecTrust { }*serverTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UIDelegate;
- (id)URL;
- (id)_MIMEType;
- (bool)_addsVisitedLinks;
- (struct CGPoint { double x1; double x2; })_adjustedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_allowsDoubleTapGestures;
- (bool)_allowsMediaDocumentInlinePlayback;
- (bool)_allowsRemoteInspection;
- (bool)_allowsViewportShrinkToFit;
- (id)_applicationNameForUserAgent;
- (bool)_backgroundExtendsBeyondPage;
- (void)_becomeFirstResponderWithSelectionMovingForward:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_beginAnimatedResizeWithUpdates:(id /* block */)arg1;
- (void)_beginInteractiveObscuredInsetsChange;
- (id)_certificateChain;
- (void)_close;
- (id)_committedURL;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_computedContentInset;
- (id)_contentProviderRegistry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForUserInteraction;
- (id)_contentSizeCategory;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentVisibleRect;
- (struct CGPoint { double x1; double x2; })_convertPointFromContentsToView:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromViewToContents:(struct CGPoint { double x1; double x2; })arg1;
- (void)_couldNotRestorePageState;
- (void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)_currentContentView;
- (id)_customUserAgent;
- (id)_dataDetectionResults;
- (id)_dataForDisplayedPDF;
- (id)_diagnosticLoggingDelegate;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction { unsigned long long x1; struct Vector<WTF::RefPtr<WebKit::PlatformCALayerRemote>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebKit::PlatformCALayerRemote> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> >, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, std::__1::unique_ptr<WebKit::RemoteLayerTreeTransaction::LayerProperties, std::__1::default_delete<WebKit::RemoteLayerTreeTransaction::LayerProperties> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; }*)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didFailLoadForMainFrame;
- (void)_didFinishLoadForMainFrame;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 data:(id)arg2;
- (void)_didFinishScrolling;
- (void)_didFirstVisuallyNonEmptyLayoutForMainFrame;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_didRelaunchProcess;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_didScroll;
- (void)_doAfterNextPresentationUpdate:(id /* block */)arg1;
- (void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(struct CGPoint { double x1; double x2; })arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3;
- (void)_enclosingScrollerScrollingEnded:(id)arg1;
- (void)_endAnimatedResize;
- (void)_endInteractiveObscuredInsetsChange;
- (id)_findDelegate;
- (void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })_fixedLayoutSize;
- (id)_formDelegate;
- (void)_frameOrBoundsChanged;
- (double)_gapBetweenPages;
- (void)_getMainResourceDataWithCompletionHandler:(id /* block */)arg1;
- (void)_getWebArchiveDataWithCompletionHandler:(id /* block */)arg1;
- (id)_handle;
- (void)_hideContentUntilNextUpdate;
- (void)_hideFindUI;
- (id)_historyDelegate;
- (void)_initializeWithConfiguration:(id)arg1;
- (id)_inputDelegate;
- (long long)_interfaceOrientationOverride;
- (bool)_isBackground;
- (bool)_isDisplayingPDF;
- (bool)_isDisplayingStandaloneImageDocument;
- (bool)_isDisplayingStandaloneMediaDocument;
- (bool)_isEditable;
- (bool)_isShowingNavigationGestureSnapshot;
- (bool)_isShowingVideoPictureInPicture;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(bool)arg2;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_killWebContentProcess;
- (void)_killWebContentProcessAndResetState;
- (void)_layerTreeCommitComplete;
- (unsigned long long)_layoutMode;
- (void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (id)_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (struct CGSize { double x1; double x2; })_maximumUnobscuredSizeOverride;
- (bool)_mayAutomaticallyShowVideoPictureInPicture;
- (struct CGSize { double x1; double x2; })_minimumLayoutSizeOverride;
- (void)_navigationGestureDidBegin;
- (void)_navigationGestureDidEnd;
- (bool)_networkRequestsInProgress;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_obscuredInsets;
- (unsigned long long)_observedRenderingProgressEvents;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1 maximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg2;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1 minimumLayoutSizeForMinimalUI:(struct CGSize { double x1; double x2; })arg2 maximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)_pageCount;
- (struct OpaqueWKPage { }*)_pageForTesting;
- (double)_pageLength;
- (double)_pageZoomFactor;
- (bool)_paginationBehavesLikeColumns;
- (bool)_paginationLineGridEnabled;
- (long long)_paginationMode;
- (Class)_printFormatterClass;
- (id)_printProvider;
- (void)_processDidExit;
- (id)_reloadWithoutContentBlockers;
- (id)_remoteInspectionNameOverride;
- (id)_remoteObjectRegistry;
- (void)_resizeWhileHidingContentWithUpdates:(id /* block */)arg1;
- (void)_restoreFromSessionStateData:(id)arg1;
- (void)_restorePageScrollPosition:(struct FloatPoint { float x1; float x2; })arg1 scrollOrigin:(struct FloatPoint { float x1; float x2; })arg2 previousObscuredInset:(struct FloatSize { float x1; float x2; })arg3 scale:(double)arg4;
- (void)_restorePageStateToUnobscuredCenter:(struct FloatPoint { float x1; float x2; })arg1 scale:(double)arg2;
- (id)_restoreSessionState:(id)arg1 andNavigate:(bool)arg2;
- (id /* block */)_retainActiveFocusedState;
- (void)_saveBackForwardSnapshotForItem:(id)arg1;
- (void)_scrollByContentOffset:(struct FloatPoint { float x1; float x2; })arg1;
- (id)_scrollPerformanceData;
- (bool)_scrollPerformanceDataCollectionEnabled;
- (void)_scrollToContentScrollPosition:(struct FloatPoint { float x1; float x2; })arg1 scrollOrigin:(struct IntPoint { int x1; int x2; })arg2;
- (bool)_scrollToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 origin:(struct FloatPoint { float x1; float x2; })arg2 minimumScrollDistance:(float)arg3;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (bool)_scrollViewIsRubberBanding;
- (long long)_selectionGranularity;
- (id)_sessionState;
- (id)_sessionStateData;
- (id)_sessionStateWithFilter:(id /* block */)arg1;
- (void)_setAddsVisitedLinks:(bool)arg1;
- (void)_setAllowsMediaDocumentInlinePlayback:(bool)arg1;
- (void)_setAllowsRemoteInspection:(bool)arg1;
- (void)_setAllowsViewportShrinkToFit:(bool)arg1;
- (void)_setApplicationNameForUserAgent:(id)arg1;
- (void)_setBackgroundExtendsBeyondPage:(bool)arg1;
- (void)_setCustomUserAgent:(id)arg1;
- (void)_setDiagnosticLoggingDelegate:(id)arg1;
- (void)_setEditable:(bool)arg1;
- (void)_setFindDelegate:(id)arg1;
- (void)_setFixedLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFormDelegate:(id)arg1;
- (void)_setGapBetweenPages:(double)arg1;
- (void)_setHasCustomContentView:(bool)arg1 loadedMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (void)_setHistoryDelegate:(id)arg1;
- (void)_setInputDelegate:(id)arg1;
- (void)_setInterfaceOrientationOverride:(long long)arg1;
- (void)_setIsBlankBeforeFirstNonEmptyLayout:(bool)arg1;
- (void)_setLayoutMode:(unsigned long long)arg1;
- (void)_setMaximumUnobscuredSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMinimumLayoutSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setObservedRenderingProgressEvents:(unsigned long long)arg1;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPageLength:(double)arg1;
- (void)_setPageZoomFactor:(double)arg1;
- (void)_setPaginationBehavesLikeColumns:(bool)arg1;
- (void)_setPaginationLineGridEnabled:(bool)arg1;
- (void)_setPaginationMode:(long long)arg1;
- (void)_setRemoteInspectionNameOverride:(id)arg1;
- (void)_setScrollPerformanceDataCollectionEnabled:(bool)arg1;
- (void)_setTextZoomFactor:(double)arg1;
- (void)_setUserContentExtensionsEnabled:(bool)arg1;
- (void)_setViewScale:(double)arg1;
- (bool)_shouldUpdateKeyboardWithInfo:(id)arg1;
- (id)_snapshotLayerContentsForBackForwardListItem:(id)arg1;
- (void)_snapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intoImageOfWidth:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)_suggestedFilenameForDisplayedPDF;
- (bool)_supportsTextZoom;
- (struct PassRefPtr<WebKit::ViewSnapshot> { struct ViewSnapshot {} *x1; })_takeViewSnapshot;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 currentScale:(double)arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (double)_textZoomFactor;
- (id)_unreachableURL;
- (void)_updateContentRectsWithState:(bool)arg1;
- (void)_updateScrollViewBackground;
- (void)_updateVisibleContentRectAfterScrollInView:(id)arg1;
- (void)_updateVisibleContentRects;
- (id)_userAgent;
- (bool)_userContentExtensionsEnabled;
- (id)_viewForFindUI;
- (double)_viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectInEnclosingScrollView:(id)arg1;
- (int)_webProcessIdentifier;
- (bool)_webProcessIsResponsive;
- (id)_webViewPrintFormatter;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_windowDidRotate:(id)arg1;
- (void)_zoomOutWithOrigin:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (void)_zoomToFocusRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selectionRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(bool)arg6 forceScroll:(bool)arg7;
- (void)_zoomToInitialScaleWithOrigin:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (void)_zoomToPoint:(struct FloatPoint { float x1; float x2; })arg1 atScale:(double)arg2 animated:(bool)arg3;
- (void)_zoomToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atScale:(double)arg2 origin:(struct FloatPoint { float x1; float x2; })arg3 animated:(bool)arg4;
- (bool)_zoomToRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOrigin:(struct FloatPoint { float x1; float x2; })arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (bool)allowsBackForwardNavigationGestures;
- (bool)allowsLinkPreview;
- (id)backForwardList;
- (bool)becomeFirstResponder;
- (id)browsingContextController;
- (bool)canBecomeFirstResponder;
- (bool)canGoBack;
- (bool)canGoForward;
- (id)certificateChain;
- (id)configuration;
- (id)customUserAgent;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedProgress;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)forceIPadStyleZoomOnInputFocus;
- (id)goBack;
- (id)goForward;
- (id)goToBackForwardListItem:(id)arg1;
- (bool)hasOnlySecureContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (bool)isLoading;
- (void)keyboardAccessoryBarNext;
- (void)keyboardAccessoryBarPrevious;
- (void)layoutSubviews;
- (id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (id)navigationDelegate;
- (id)reload;
- (id)reloadFromOrigin;
- (id)scrollView;
- (struct CGSize { double x1; double x2; })scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct __SecTrust { }*)serverTrust;
- (void)setAllowsBackForwardNavigationGestures:(bool)arg1;
- (void)setAllowsLinkPreview:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setForceIPadStyleZoomOnInputFocus:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUIDelegate:(id)arg1;
- (void)stopLoading;
- (id)title;
- (bool)usesStandardContentView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInViewCoordinates;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_securityInfo;
- (void)_sf_setSecurityInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (struct UIImage { Class x1; }*)compassImageForColor:(struct UIColor { Class x1; }*)arg1;
- (char *)createRGBAPixelBufferFromImage:(struct CGImage { }*)arg1;
- (struct UIImage { Class x1; }*)defaultSiteIcon;
- (struct UIColor { Class x1; }*)keyColorFromImage:(struct UIImage { Class x1; }*)arg1;
- (struct UIImage { Class x1; }*)screenshot;

@end
